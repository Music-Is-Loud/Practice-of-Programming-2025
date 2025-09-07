#ifndef LECTURE_H
#define LECTURE_H
#include "timeData.h"
#include "event.h"
class Lecture: public Event
{
private:
    QString m_courseId;//课程编号
public:

    int lectureId;//单节课编号
    //lectureTime lecTime;//上课时间
    QString location;//上课地点

    //构造函数
    Lecture(const QString& _name, const QDateTime& _baseTime, const QString& _details,
                  const QString& _courseId, const int& _lectureId, const QString& _location);


    //直接传入信息创建一门课，这门课下有好几个Lecture类
    static void createCourse(const QString& _courseId, const QString& _courseName,const lectureTime* _timeList,
                      const QString& _location, const QString& _details);
    //通过文件创建一门课
    static void createFromFile(const QString& filePath);


    //通过一门课的ID删除这门课的全部
    static bool deleteCourse(const QString& courseId);
    //通过一门课的ID和一节课的ID删除这门课的某一节课
    static bool deleteLecture(const QString& courseId, const int& lectureId);


    //查询某门课
    static QList<Lecture> queryAllCourses(QString courseId);


    //更新当前这节课的信息
    bool updateLectureInfo(const Lecture& newLecture);
    //更新这门课的信息
    static bool updateCourseInfo(const QString& courseId, const int& lectureId,const Lecture& newLecture);

};


#endif // LECTURE_H
