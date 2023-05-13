#include "main.h"

void checkELF(unsigned char *e_ident);
void closeELF(int elf);
void ELF_info(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 * checkELF - Checks if a file is an ELF file
 * @e_ident: A pointer to an array containing the ELF
 *
 * Return: Void
 */
void checkELF(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' &&
			e_ident[i] != 'F')
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);
	}
}

/**
 * closeELF - Closes an ELF file
 * @elf: File descriptor of the ELF file
 *
 * Return: Void
 */
void closeELF(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * ELF_info - Prints the info of an ELF header
 * @e_ident: A pointer to an array containing the ELF
 *
 * Return: Void
 */
void ELF_info(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
	printf("%02x", e_ident[i]);
	if (i == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
	}

	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32:
	printf("ELF32\n");
	break;
	case ELFCLASS64:
	printf("ELF64\n");
	break;
	default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}

	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
	printf("2's complement, little endian\n");
	break;
	case ELFDATA2MSB:
	printf("2's complement, big endian\n");
	break;
	default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}

	printf("  Version:                           %d",
	   e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}

	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}

	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * printType - Prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident: A pointer to an array containing the ELF class
 *
 * Return: Void
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header
 * @e_entry: The address of the ELF entry point
 * @e_ident: A pointer to an array containing the ELF class
 *
 * Return: Void
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * main - Displays the information contained in the ELF header at the start
 *        of an ELF file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *h;
	int elf, rd;

	(void)argc;

	elf = open(argv[1], O_RDONLY);
	if (elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		closeELF(elf);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(elf, h, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(h);
		closeELF(elf);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkELF(h->e_ident);
	printf("ELF Header:\n");
	ELF_info(h->e_ident);
	print_type(h->e_type, h->e_ident);
	print_entry(h->e_entry, h->e_ident);

	free(h);
	closeELF(elf);

	return (0);
}
