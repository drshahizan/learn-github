using System;
using System.Collections.Generic;

// Subject interface that defines methods for attaching, detaching, and notifying observers.
interface ISubject
{
    void Attach(IObserver observer);
    void Detach(IObserver observer);
    void Notify();
}

// ConcreteSubject class that implements the ISubject interface.
class ConcreteSubject : ISubject
{
    private List<IObserver> observers = new List<IObserver>();
    private int state;

    public int State
    {
        get { return state; }
        set
        {
            state = value;
            Notify();
        }
    }

    public void Attach(IObserver observer)
    {
        observers.Add(observer);
    }

    public void Detach(IObserver observer)
    {
        observers.Remove(observer);
    }

    public void Notify()
    {
        foreach (var observer in observers)
        {
            observer.Update();
        }
    }
}

// Observer interface that defines the Update method.
interface IObserver
{
    void Update();
}

// ConcreteObserver class that implements the IObserver interface.
class ConcreteObserver : IObserver
{
    private string name;
    private int observerState;
    private ConcreteSubject subject;

    public ConcreteObserver(string name, ConcreteSubject subject)
    {
        this.name = name;
        this.subject = subject;
    }

    public void Update()
    {
        observerState = subject.State;
        Console.WriteLine($"Observer {name} has received an update. New state: {observerState}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        ConcreteSubject subject = new ConcreteSubject();

        ConcreteObserver observer1 = new ConcreteObserver("Observer 1", subject);
        ConcreteObserver observer2 = new ConcreteObserver("Observer 2", subject);

        subject.Attach(observer1);
        subject.Attach(observer2);

        subject.State = 10;

        subject.Detach(observer1);

        subject.State = 20;
    }
}

