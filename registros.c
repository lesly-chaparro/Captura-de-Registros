/*CAPTURA DE REGISTROS
Lesly Moreno*/

#include <stdio.h>
#include <string.h>


struct informacion{
	char nombre[25];
	char Paterno[25];
	char Materno[25];
	char direccion[25];
};

struct profesorado{
	char numeroEmpleado[13];
	struct informacion DatosProfesor;
}prof[20];

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct informacion DatosEstudiante;
}estudiante[20];

int main(void){
	int op;
	int folios;

	//Interacción con el usuario
	printf("\t\t\nCAPTURA DE REGISTROS\n");
	printf("\n¿Cuantos registros deseas realizar?\n");
	scanf("%d", &folios);
	puts("\n¿Que tipo de registro deseas realizar?\n");
	puts("1.-Profesores");
	puts("2.-Alumnos");
	scanf("%i", &op);

	for(int i=0;i<folios;i++){
		//Profesor
		if(op == 1){
			printf("\nNumero de empleado:");
			fflush(stdin);
			fgets(prof[i].numeroEmpleado,13,stdin);
			printf("Nombre(s): ");
			fflush(stdin);
			fgets(prof[i].DatosProfesor.nombre, 25, stdin);
			printf("Apellido Paterno: ");
			fflush(stdin);
			fgets(prof[i].DatosProfesor.Paterno, 25, stdin);
			printf("Apellido Materno: ");
			fflush(stdin);
			fgets(prof[i].DatosProfesor.Materno, 25, stdin);
			//Se tiene que imprimir como arreglo
			//printf("\n\nNumero de empleado: %s",prof.numeroEmpleado);
			//printf("\n\tProfesor(a):\n%s%s%s", prof.DatosProfesor.nombre, prof.DatosProfesor.Paterno, prof.DatosProfesor.Materno);   

		//Alumnos
		}else if(op == 2){
			printf("\nNumero de cuenta: ");
			fflush(stdin);
			fgets(estudiante.numeroCuenta,13,stdin);
			printf("Nombre (s): ");
			fflush(stdin);
			fgets(estudiante.DatosEstudiante.nombre, 25, stdin);
			printf("Apellido Paterno: ");
			fflush(stdin);
			fgets(estudiante.DatosEstudiante.Paterno, 25, stdin);
			printf("Apellido Materno: ");
			fflush(stdin);
			fgets(estudiante.DatosEstudiante.Materno, 25, stdin);
			printf("\n\n\tNumero de cuenta: %s ",estudiante.numeroCuenta);
			printf("\n\tAlumno (a):\n%s%s%s",  estudiante.DatosEstudiante.nombre, estudiante.DatosEstudiante.Paterno, estudiante.DatosEstudiante.Materno);   
	}else{
		printf("Dame una opcion valida");
	}
	//Impresión
        for (int i=0; i<num_registros; i++){
                printf("\n\tID: %s \tNombre:%s \tApellido Paterno: %s \tApellido Materno: %s", prof[i].numeroEmpleado, prof[i].DatosProfesor.nombre, prof[i].DatosProfesor.apPaterno, prof[i].DatosProfesor.apMaterno);
        }

	}
	return 0;
}
