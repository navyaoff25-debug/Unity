using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;

public class Quiz_App
{
    public delegate void QuizEventHandle(string message);

    public event QuizEventHandle OnQuizStart;
    public event QuizEventHandle OnCorrectAnswer;
    public event QuizEventHandle OnWrongAnswer;
    public event QuizEventHandle OnQuizEnd;

    List<string> Questions = new List<string>()
    {
        "1. What is 2+3?",
        "2. Which language is used in Unity?",
        "3. What is the capital of France?"
    };

    List<string> Answers = new List<string>()
    {
        "5",
        "c#",
        "paris"
    };

    public void StartQuiz()
    {
        OnQuizStart?.Invoke("Quiz Started!");

        int score = 0;

        for(int i = 0; i < Questions.Count; i++)
        {
            Console.WriteLine(Questions[i]);
            Console.Write("Your Answer : ");
            string user_ans = Console.ReadLine().ToLower();

            if (user_ans == Answers[i])
            {
                score ++;
                OnCorrectAnswer?.Invoke("Hurray!! Correct Answer");
            }
            else
            {
                OnWrongAnswer?.Invoke("Oopss.. Wrong Answer");
            }
        }

        OnQuizEnd?.Invoke($"Quiz Ended! \nYour score : {score}/{Questions.Count}");
    }
}

public class program
{
    public static void Main ()
    {
        Quiz_App quiz = new Quiz_App();

        quiz.OnQuizStart += message => Console.WriteLine(message + "\n");
        quiz.OnCorrectAnswer += message => Console.WriteLine(message + "\n");
        quiz.OnWrongAnswer += message => Console.WriteLine(message + "\n");
        quiz.OnQuizEnd += message => Console.WriteLine(message + "\n");

        quiz.StartQuiz();
    }
}

