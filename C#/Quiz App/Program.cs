using System;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;

public class QuizApp
{
    public delegate void QuizEventHandler(string message);

    public event QuizEventHandler? OnQuizStart;
    public event QuizEventHandler? OnCorrectAnswer;
    public event QuizEventHandler? OnWrongAnswer;
    public event QuizEventHandler? OnQuizEnd;

    List<string> Questions = new List<string>()
    {
        "What is 5*3 ? ",
        "Which language is used in Unity ? ",
        "What is the capital of France ?"
    };

    List<string> Answers = new List<string>()
    {
        "15",
        "c#",
        "paris"
    };

    public void StartQuiz()
    {
        for (int i = 0; i <  Questions.Count, i++)
        {
            Console.WriteLine(Questions[i]);
            Console.Write
        }
    }
}