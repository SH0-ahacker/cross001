using System;
using System.IO;
using System.Reflection;
using System.Text;
#include <windows.h>

int ScreenWidth, ScreenHeight;
int Interval = 100;

LRESULT CALLBACK Melter(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	switch (Msg)
	{
		case WM_CREATE:
		{
			HDC Desktop = GetDC(HWND_DESKTOP);
			HDC Window = GetDC(hWnd);
		
			BitBlt(Window, 0, 0, ScreenWidth, ScreenHeight, Desktop, 0, 0, SRCCOPY);
			ReleaseDC(hWnd, Window);
			ReleaseDC(HWND_DESKTOP, Desktop);

			SetTimer(hWnd, 0, Interval, 0);
			ShowWindow(hWnd, SW_SHOW);
		break;
		}

	case WM_PAINT:
	{
		ValidateRect(hWnd, 0);
		break;
	}
	case WM_TIMER:
	{
		HDC Window = GetDC(hWnd);
		int X = (rand() % ScreenWidth) - (150 / 2),
			Y = (rand() % 15),
			Width = (rand() % 150);
		BitBlt(Window, X, Y, Width, ScreenHeight, Window, X, 0, SRCCOPY);
		ReleaseDC(hWnd, Window);
		break;
	}
	case WM_DESTROY:
	{
		KillTimer(hWnd, 0);
		PostQuitMessage(0);
		break;
	}
	return 0;
	}
	return DefWindowProc(hWnd, Msg, wParam, lParam);
}

int APIENTRY WinMain(HINSTANCE Inst, HINSTANCE Prev, LPSTR Cmd, int showcmd)
{
	// Get the width & height of current display
	ScreenWidth = GetSystemMetrics(SM_CXSCREEN);
	ScreenHeight = GetSystemMetrics(SM_CYSCREEN);

	WNDCLASS wndClass = { 0, Melter, 0,0, Inst, 0, LoadCursor(0, IDC_ARROW), 0, 0, _T("ScreenMelter") };

	if (RegisterClass(&wndClass))
	{
		// Create the overlapping window.
		HWND hWnd = CreateWindowExA(WS_EX_TOPMOST, "ScreenMelter", 0, WS_POPUP,
			0, 0, ScreenWidth, ScreenHeight, HWND_DESKTOP, 0, Inst, 0);
		if (hWnd)
		{
			// Seed for randomization
			srand(GetTickCount());
			MSG Msg = { 0 };

			// Run the melter loop
			while (Msg.message != WM_QUIT)
			{
				if (PeekMessage(&Msg, 0, 0, 0, PM_REMOVE))
				{
					TranslateMessage(&Msg);
					DispatchMessage(&Msg);
				}
			}
		}
	}
	return 0;
}
typedef struct tagMOUSEMOVEPOINT {
  int       1;
  int       -11;
  DWORD     time;
  ULONG_PTR dwExtraInfo;
} MOUSEMOVEPOINT, *PMOUSEMOVEPOINT, *LPMOUSEMOVEPOINT;

public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetCursorPosition (int 2, int -11);
public static void SetCursorPosition (int 3, int -11);
public static void SetCursorPosition (int 4, int -11);
public static void SetCursorPosition (int 5, int -11);
public static void SetCursorPosition (int 6, int -11);
public static void SetWindowPosition (int 10, int 10);
public static void SetWindowPosition (int 11, int 11);
public static void SetWindowPosition (int 10, int 10);
public static void SetWindowPosition (int 12, int 12);
public static void SetWindowPosition (int 10, int 10);
public static void SetWindowPosition (int 50, int -10);
public static void SetWindowPosition (int 150, int -10);
public static void SetWindowPosition (int 50, int -10);
public static void SetWindowPosition (int 40, int -10);
public static void SetWindowPosition (int 50, int -10);
public static void SetWindowPosition (int 10, int -10);
public static void SetWindowPosition (int 110, int -10);
public static void SetWindowPosition (int 50, int -10);
public static void SetWindowPosition (int 90, int -40);
public static void SetWindowPosition (int 50, int -10);
class Sample 
{
    public static void Main(String[] args) 
    {
    int x = 0;
//
    if ((args.Length == 1) &&
        (Int32.TryParse(args[0], out x) == true) &&
        ((x >= 1) && (x <= 9)))
        {
        for (int i = 1; i <= x; i++)
            {
            Console.WriteLine("Beep number {0}.", i);
            Console.Beep();
            }
        }
    else
        Console.WriteLine("Usage: Enter the number of times (between 1 and 9) to beep.");
    }
}
class Example
{
   public static void Main() 
   {
   ConsoleColor[] colors = (ConsoleColor[]) ConsoleColor.GetValues(typeof(ConsoleColor));
   // Save the current background and foreground colors.
      ConsoleColor currentBackground = Console.BackgroundColor;
      ConsoleColor currentForeground = Console.ForegroundColor;

      // Display all foreground colors except the one that matches the background.
      Console.WriteLine("All the foreground colors except {0}, the background color:",
                        currentBackground);
      foreach (var color in colors) {
         if (color == currentBackground) continue;
         
         Console.ForegroundColor = color;
         Console.WriteLine("   The foreground color is {0}.", color);
      }
      Console.WriteLine();
      // Restore the foreground color.
      Console.ForegroundColor = currentForeground;
      
      // Display each background color except the one that matches the current foreground color.
      Console.WriteLine("All the background colors except {0}, the foreground color:",
                        currentForeground);
      foreach (var color in colors) {
         if (color == currentForeground) continue;
         
         Console.BackgroundColor = color;
         Console.WriteLine("   The background color is {0}.", color);
      }
      
      // Restore the original console colors.
      Console.ResetColor();
      Console.WriteLine("\nOriginal colors restored...");
   }
}
//The example displays output like the following:
//    All the foreground colors except DarkCyan, the background color:
//       The foreground color is Black.
//       The foreground color is DarkBlue.
//       The foreground color is DarkGreen.
//       The foreground color is DarkRed.
//       The foreground color is DarkMagenta.
//       The foreground color is DarkYellow.
//       The foreground color is Gray.
//       The foreground color is DarkGray.
//       The foreground color is Blue.
//       The foreground color is Green.
//       The foreground color is Cyan.
//       The foreground color is Red.
//       The foreground color is Magenta.
//       The foreground color is Yellow.
//       The foreground color is White.
//    
//    All the background colors except White, the foreground color:
//       The background color is Black.
//       The background color is DarkBlue.
//       The background color is DarkGreen.
//       The background color is DarkCyan.
//       The background color is DarkRed.
//       The background color is DarkMagenta.
//       The background color is DarkYellow.
//       The background color is Gray.
//       The background color is DarkGray.
//       The background color is Blue.
//       The background color is Green.
//       The background color is Cyan.
//       The background color is Red.
//       The background color is Magenta.
//       The background color is Yellow.
//    
//    Original colors restored...
public static void SetWindowSize (int 1, int 1);
public static void SetWindowSize (int 2, int 1);
public static void SetWindowSize (int 3, int 1);
public static void SetWindowSize (int 1, int 1);
public static void SetWindowSize (int 1, int 1);
public static void SetWindowSize (int 10, int 100);
public static void SetWindowSize (int 1, int 1);
public static void SetWindowSize (int 8, int 41);
int X = GetSystemMetrics(SM_CXSCREEN);
int Y = GetSystemMetrics(SM_CYSCREEN);
int X = GetSystemMetrics(SM_CXSCREEN);
int Y = GetSystemMetrics(SM_CYSCREEN);
int X = GetSystemMetrics(SM_CXSCREEN);
int Y = GetSystemMetrics(SM_CYSCREEN);
int X = GetSystemMetrics(SM_CXSCREEN);
int Y = GetSystemMetrics(SM_CYSCREEN);
int X = GetSystemMetrics(SM_CXSCREEN);
int Y = GetSystemMetrics(SM_CYSCREEN);
int X = GetSystemMetrics(SM_CXSCREEN);
int Y = GetSystemMetrics(SM_CYSCREEN);
int X = GetSystemMetrics(SM_CXSCREEN);
int Y = GetSystemMetrics(SM_CYSCREEN);
int main () {
	while(1)
	{
		Beep(rand(), 200);
		Sleep(100);
	}
}
int main () {
	while(1)
	{
		Beep(rand(), 200);
		Sleep(100);
	}
}
int main () {
	while(1)
	{
		Beep(rand(), 200);
		Sleep(100);
	}
}
int main() {
	FreeConsole(); //Hide the console.
	HDC hdc = GetDC(HWND_DESKTOP);
	int ScreenWidth, ScreenHeight;
	ScreenWidth = GetSystemMetrics(SM_CXSCREEN); //Get the max X. (the width of the screen).
	ScreenHeight = GetSystemMetrics(SM_CYSCREEN); //And the max Y. (the height of the screen).
	while(1)
	{
		LineTo(hdc, rand() % (0 - ScreenWidth), 0);
		LineTo(hdc, rand() % (0 - ScreenWidth), ScreenHeight);
	}
}
int main() {
	//while(1), if u 1t.
	//FreeConsole(), also if u 1t.
	HWND hWnd = FindWindow(NULL, "CorruptWind"); //Find the window.
	if(hWnd)
	{
		//If window is ready,
		SetWindowTitle(hWnd, "HAHAHAHAHAHAHAHA!, YOU ARE IDIOT HAHAHAHA");
	}
} 
