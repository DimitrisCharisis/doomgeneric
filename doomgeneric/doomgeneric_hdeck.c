#include <inttypes.h>
/*** DoomGeneric Functions ***/
/* Initialize your platfrom (create window, framebuffer, etc...) */
void DG_Init()
{
        /* TODO */
}

/* Frame is ready in DG_ScreenBuffer. Copy it to your platform's screen */
void DG_DrawFrame()
{
        /* TODO */
}

/* Sleep in milliseconds */
void DG_SleepMs(uint32_t ms)
{
        /* TODO */
}

/* The ticks passed since launch in milliseconds */
uint32_t DG_GetTicksMs()
{
        /* TODO */
}

/* Provide keyboard events. */
int DG_GetKey(int *pressed, unsigned char *doomKey)
{
        /* TODO */
}

/*
 * Not required. This is for setting the window title as Doom
 * sets this from WAD file.
 */
void DG_SetWindowTitle(const char *title)
{
        /* TODO */
}

int main(int argc, char **argv)
{
        doomgeneric_Create(argc, argv);

        for (int i = 0; ; i++) {
                doomgeneric_Tick();
        }

        return 0;
}

