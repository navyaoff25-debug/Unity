// See https://aka.ms/new-console-template for more information
//Console.WriteLine("Hello, World!");


// using System;

// namespace Container
// {
//     class Program
//     {
//         private int age;

//         public int Age
//         {
//             get { return age;}
//             set
//             {
//                 if (value < 0)
//                 {
//                     Console.WriteLine("Invalid Age");
//                 }
//                 else
//                 {
//                     age = value;
//                 }
//             }
//         }
        
//         static void Main()
//         {
//             Program my_age = new Program();
//             my_age.Age = 21;
//             Console.WriteLine(my_age.Age);
//         }
//    }
// }

using System;

namespace Container
{
    class Program
    {
        public int Age {get; set;}

        static void Main()
        {
            Program my_age = new Program();
            my_age.Age = 21;
            Console.WriteLine(my_age.Age);
        }
   }
}