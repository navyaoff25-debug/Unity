using System;
using System.Collections.Generic;

namespace to_do
{
    class Todo
    {
      static List<string> tasks = new List<string>();
     
      static void add_task()
      {
        Console.WriteLine("Enter Task : ");
        string new_task = Console.ReadLine();

        tasks.Add(new_task);
        Console.WriteLine("Task addedd successfully");
      }

      static void view_task()
      {
        if (tasks.Count == 0) {
          Console.WriteLine("No tasks to display");
          return;
        }
        
        Console.WriteLine("To-Do List");
        int i = 1;
        foreach(string task in tasks) {
           Console.WriteLine($"{i}. {task}");
           i++;
        }

      }
 
      static void delete_task()
      {
        if (tasks.Count == 0) {
          Console.WriteLine("No tasks to delete");
          return;
        }
       
        Console.WriteLine("To-Do List");
        view_task();
 
        Console.WriteLine("Enter task number to delete : ");

        int task_num = Convert.ToInt32(Console.ReadLine());

        if (task_num < 1 || task_num > tasks.Count) {
          Console.WriteLine("Invalid task number");
          return;
        }
        else {
          tasks.RemoveAt(task_num - 1);
          Console.WriteLine($"Task {task_num} is deleted successfully");
        }
      }

      static void exit_program() {
        Console.WriteLine("Exiting");
        Console.WriteLine("Press Enter to close.");
        Console.ReadLine();
        Environment.Exit(0);
      }

      static void Main()
        {
          while(true) {
            Console.WriteLine("--- TO-DO MENU ---");
            Console.WriteLine("1. Add Task");
            Console.WriteLine("2. View Tasks");
            Console.WriteLine("3. Delete Task");
            Console.WriteLine("4. Exit");
            Console.Write("Enter your choice: ");

            int choice = Convert.ToInt32(Console.ReadLine());

            switch (choice)
            {
              case 1:
                add_task();
                break;
              case 2:
                view_task();
                break;
              case 3:
                delete_task();
                break;
              case 4:
                exit_program();
                break;
              default:
                Console.WriteLine("Invalid Choice");
                break;
            }
          }
        }

    }
}
