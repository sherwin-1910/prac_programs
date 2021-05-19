#include<iostream>

class Log
{
public:
	enum Level
	{
		LevelError = 0,LevelWarning,LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level) 
	{
		m_LogLevel = level;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout <<"[INFO]: " << message << std::endl;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout <<"[WARNING]: " << message << std::endl;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout <<"[ERROR]: " << message << std::endl;
	}
};
int main()
{
	Log log;
	log.SetLevel(Log::LevelError);
	log.Error("Hello Cherno");
	std::cout << "Hello World" << std::endl;
	std::cin.get();
}