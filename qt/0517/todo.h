#ifndef TODO_H
#define TODO_H
#include "Event.h"
class Todo:public Event
{
public:
    bool isCompleted;//是否完成
    int priority;//优先级
    int todoId;//编号
    //创建todo
    Todo(const QString& _name, const QDateTime& _baseTime, const QString& _details,
         const bool& _isCompleted, const int& _priority, const int& todoId);


    //查询,按照todoId查询
    static Todo queryById(const int& todoId);
    //按照日期查询
    static QList<Todo> queryByDate(const QDate& date);


    //删除todo
    static bool deleteTodo(const int& todoId);


    //标记完成
    bool markCompleted();


    //修改todo信息
    bool updateTodo(const Todo& newTodo);

};

#endif // TODO_H
