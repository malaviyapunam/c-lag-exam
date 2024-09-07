#include <stdio.h>

    
    file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("Enter name of employee %d: ", i + 1);
        fgets(name, MAX_NAME_LENGTH, stdin);
        name[strcspn(name, "\n")] = '\0';
        
        printf("Enter role (designation) of employee %d: ", i + 1);
        fgets(role, MAX_ROLE_LENGTH, stdin);
        role[strcspn(role, "\n")] = '\0';
        

        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", name);
        fprintf(file, "Role: %s\n\n", role);
    }
    
    fclose(file);
    
    printf("Data successfully written to %s\n", filename);
}

int main() {
    const char *filename = "data.bxt";
    
    writeEmployeeDataToFile(filename);
    
  
}