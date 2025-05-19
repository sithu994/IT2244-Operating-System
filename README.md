cat data.csv: Displays the content of the data.csv file in the terminal.
chmod 777 data.csv: Changes the file permissions of data.csv to allow read, write, and execute access for the owner, group, and others.
./data.csv: Attempts to execute the data.csv file as a program, which fails because it's a data file, not an executable.
awk -F',' '$4 > 3.5 { print }' data.csv: Filters and prints lines from data.csv where the fourth field (GPA) is greater than 3.5. It uses a comma as the field separator.
awk -F',' 'NR > 1 { sum += $4; count++ } END { if (count > 0) print "Average GPA:", sum/count }' data.csv: Calculates and prints the average GPA from the data.csv file, skipping the header row. It sums the GPA values and divides by the number of students
# IT2244-Operating-System![ans2-i](https://github.com/user-attachments/assets/97dadbcb-db27-4284-978e-3d29726643d0)
![ans2-ii](https://github.com/user-attachments/assets/6fd4a6bb-67a7-47b4-b935-eb8dac94e7bf)
vi ans3.sh: This command likely opened the ans3.sh file in the vi text editor (though the content isn't fully visible).
chmod 777 ans3.sh: This command changed the permissions of ans3.sh to allow read, write, and execute access for all users.
./ans3.sh: This command executed the ans3.sh script.
The script then prompted the user to enter two strings: "Apple" and "Banana".
Finally, the script outputted: "Banana is larger than Apple" because the length of "Banana" (6 characters) is greater than the length of "Apple" (5 characters).
![ans3](https://github.com/user-attachments/assets/440ddf36-9232-41db-97ad-f0ad687227cd)
@echo off: This command prevents the subsequent commands from being displayed in the command prompt window as they are executed, resulting in a cleaner output.
cd %USERPROFILE%\Desktop: This command changes the current directory to the user's Desktop folder. %USERPROFILE% is an environment variable that typically points to C:\Users\<YourUsername>.
mkdir "CSC2244 Marks Exam": This command creates a new folder named "CSC2244 Marks Exam" on the Desktop.
cd "CSC2244 Marks Exam": This command changes the current directory into the newly created "CSC2244 Marks Exam" folder.
mkdir practical theory "exam papers": This command creates three subfolders inside "CSC2244 Marks Exam": "practical", "theory", and "exam papers".
cd practical: This command changes the current directory to the "practical" subfolder.
echo. > practical.txt: This command creates an empty text file named "practical.txt" inside the "practical" folder. The echo. command outputs a blank line, and the > redirects this output to create the file.
echo. > practical.docx: This command creates an empty Word document file named "practical.docx" inside the "practical" folder.
echo. > practical.pptx: This command creates an empty PowerPoint presentation file named "practical.pptx" inside the "practical" folder.
cd ..: This command moves the current directory one level up (back to "CSC2244 Marks Exam").
cd theory: This command changes the current directory to the "theory" subfolder.
The subsequent echo. > commands create empty "theory.txt", "theory.docx", and "theory.pptx" files inside the "theory" folder, similar to the "practical" folder.
The script then navigates to the "exam papers" folder and creates empty "exam.txt", "exam.docx", and "exam.pptx" files.
cd ..: Navigates back to "CSC2244 Marks Exam".
cd %USERPROFILE%\Desktop: Navigates back to the Desktop.
echo. > "Icae Marks.xlsx": Creates an empty Excel spreadsheet file named "Icae Marks.xlsx" on the Desktop.
echo. > "Final Exam Marks.xlsx": Creates an empty Excel spreadsheet file named "Final Exam Marks.xlsx" on the Desktop.
move "Icae Marks.xlsx" Marks: This command attempts to move the file "Icae Marks.xlsx" into a folder named "Marks". However, the "Marks" folder has not been created yet in this script, so this command will likely fail unless a folder named "Marks" already exists on the Desktop.
move "Final Exam Marks.xlsx" Marks: Similarly, this command attempts to move "Final Exam Marks.xlsx" into the (potentially non-existent) "Marks" folder.
xcopy Marks Exam /E /I: This command copies the contents of a folder named "Marks" into a folder named "Exam", including all subdirectories and empty directories (/E). The /I option prevents prompting if the destination "Exam" is a file or directory. Again, the "Marks" folder was not explicitly created in this script, so this command will likely not perform the intended action unless a "Marks" folder already exists. Also, the destination folder is named "Exam", while the main created folder is "CSC2244 Marks Exam". This might be a typo or an assumption that an "Exam" folder exists.
attrib +h Exam: This command sets the hidden attribute (+h) on a file or folder named "Exam". Similar to the xcopy command, the target is a folder named "Exam", not the main "CSC2244 Marks Exam" folder created earlier.
![ans-i](https://github.com/user-attachments/assets/4cb29591-3252-45db-be3b-16486a10edee)
![ans-ii](https://github.com/user-attachments/assets/59bb4657-da16-49c4-b617-3be421472ef3)
![ans-iii](https://github.com/user-attachments/assets/e7311008-5af6-4b11-984d-e6b38f3f5b5f)
![ans-iv](https://github.com/user-attachments/assets/363e145b-ce48-4995-aa77-117172db4ee4)
![ans-v](https://github.com/user-attachments/assets/b4133b3f-bcbc-4edf-8c06-ac767306a3b5)
