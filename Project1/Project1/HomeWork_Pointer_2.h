#include <memory>
#include <iostream>

namespace Pointer_2 {

	class Logger {
	public:
		/*Logger() {
			logInfo("System is starting.");
			logWarning("Low disk space.");
			logError("Unable to connect to the server.");
			showTotalLogs();
			delete this;
		}*/

		void log() {

		}

		void logInfo(std::string massage)
		{
			std::cout << "[INFO] : " << massage << std::endl;
			logCount++;
		}

		void logWarning(std::string massage)
		{
			std::cout << "[WARNING] :" << massage << std::endl;
			logCount++;
		}

		void logError(std::string massage)
		{
			std::cout << "[ERROR] :" << massage << std::endl;
			logCount++;
		}

		void showTotalLogs() {
			std::cout << "Total logs recorded: " << logCount << std::endl;
		}

		~Logger() {
			std::cout << "Logger instance destroyed." << std::endl;
		}



	private:
		int logCount = 0;
	};




	class MyClass {

	public:
		MyClass() {
			//���
			// 
			std::unique_ptr<Logger> uptr = std::make_unique<Logger>();
			//��� �������� ������ ����� MyClass�� ���� ���������� Myclass�� �Ҹ��Ҷ����� ������ ���� ����
			/*std::unique_ptr<Logger> uptr;
			uptr = std::make_unique<Logger>();*/
			uptr->logInfo("System is starting.");
			uptr->logWarning("Low disk space.");
			uptr->logError("Unable to connect to the server.");
			uptr->showTotalLogs();
			
			//delete ���̵� �ڵ� ������ 
			
		}

		
		
		

	};
}