#pragma once

#ifdef _MSC_VER
#define FORWARDED_EXPORT_WITH_ORDINAL(exp_name, ordinal, target_name) __pragma (comment (linker, "/export:" #exp_name "=" #target_name ",@" #ordinal))
#endif
#ifdef __GNUC__
#define FORWARDED_EXPORT_WITH_ORDINAL(exp_name, ordinal, target_name) __asm__(".section .drectve\n\t.ascii \" -export:" #exp_name "= " #target_name " @" #ordinal "\"");
#endif


FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferBlit@12, 1, betausm_._BinkBufferBlit@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferCheckWinPos@12, 2, betausm_._BinkBufferCheckWinPos@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferClear@8, 3, betausm_._BinkBufferClear@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferClose@4, 4, betausm_._BinkBufferClose@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferGetDescription@4, 5, betausm_._BinkBufferGetDescription@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferGetError@0, 6, betausm_._BinkBufferGetError@0)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferLock@4, 7, betausm_._BinkBufferLock@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferOpen@16, 8, betausm_._BinkBufferOpen@16)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferSetDirectDraw@8, 9, betausm_._BinkBufferSetDirectDraw@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferSetHWND@8, 10, betausm_._BinkBufferSetHWND@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferSetOffset@12, 11, betausm_._BinkBufferSetOffset@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferSetResolution@12, 12, betausm_._BinkBufferSetResolution@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferSetScale@12, 13, betausm_._BinkBufferSetScale@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkBufferUnlock@4, 14, betausm_._BinkBufferUnlock@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkCheckCursor@20, 15, betausm_._BinkCheckCursor@20)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkClose@4, 16, betausm_._BinkClose@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkCloseTrack@4, 17, betausm_._BinkCloseTrack@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkCopyToBuffer@28, 18, betausm_._BinkCopyToBuffer@28)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkCopyToBufferRect@44, 19, betausm_._BinkCopyToBufferRect@44)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkDDSurfaceType@4, 20, betausm_._BinkDDSurfaceType@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkDX8SurfaceType@4, 21, betausm_._BinkDX8SurfaceType@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkDX9SurfaceType@4, 22, betausm_._BinkDX9SurfaceType@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkDoFrame@4, 23, betausm_._BinkDoFrame@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetError@0, 24, betausm_._BinkGetError@0)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetFrameBuffersInfo@8, 25, betausm_._BinkGetFrameBuffersInfo@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetKeyFrame@12, 26, betausm_._BinkGetKeyFrame@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetRealtime@12, 27, betausm_._BinkGetRealtime@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetRects@8, 28, betausm_._BinkGetRects@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetSummary@8, 29, betausm_._BinkGetSummary@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetTrackData@8, 30, betausm_._BinkGetTrackData@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetTrackID@8, 31, betausm_._BinkGetTrackID@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetTrackMaxSize@8, 32, betausm_._BinkGetTrackMaxSize@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGetTrackType@8, 33, betausm_._BinkGetTrackType@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkGoto@12, 34, betausm_._BinkGoto@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkIsSoftwareCursor@8, 35, betausm_._BinkIsSoftwareCursor@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkLogoAddress@0, 36, betausm_._BinkLogoAddress@0)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkNextFrame@4, 37, betausm_._BinkNextFrame@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkOpen@8, 38, betausm_._BinkOpen@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkOpenDirectSound@4, 39, betausm_._BinkOpenDirectSound@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkOpenMiles@4, 40, betausm_._BinkOpenMiles@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkOpenTrack@8, 41, betausm_._BinkOpenTrack@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkOpenWaveOut@4, 42, betausm_._BinkOpenWaveOut@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkPause@8, 43, betausm_._BinkPause@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkRegisterFrameBuffers@8, 44, betausm_._BinkRegisterFrameBuffers@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkRestoreCursor@4, 45, betausm_._BinkRestoreCursor@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkService@4, 46, betausm_._BinkService@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetError@4, 47, betausm_._BinkSetError@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetFrameRate@8, 48, betausm_._BinkSetFrameRate@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetIO@4, 49, betausm_._BinkSetIO@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetIOSize@4, 50, betausm_._BinkSetIOSize@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetMemory@8, 51, betausm_._BinkSetMemory@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetMixBinVolumes@20, 52, betausm_._BinkSetMixBinVolumes@20)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetMixBins@16, 53, betausm_._BinkSetMixBins@16)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetPan@12, 54, betausm_._BinkSetPan@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetSimulate@4, 55, betausm_._BinkSetSimulate@4)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetSoundOnOff@8, 56, betausm_._BinkSetSoundOnOff@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetSoundSystem@8, 57, betausm_._BinkSetSoundSystem@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetSoundTrack@8, 58, betausm_._BinkSetSoundTrack@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetVideoOnOff@8, 59, betausm_._BinkSetVideoOnOff@8)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkSetVolume@12, 60, betausm_._BinkSetVolume@12)
FORWARDED_EXPORT_WITH_ORDINAL(_BinkWait@4, 61, betausm_._BinkWait@4)
FORWARDED_EXPORT_WITH_ORDINAL(_RADTimerRead@0, 62, betausm_._RADTimerRead@0)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_16a1bpp@40, 63, betausm_._YUV_blit_16a1bpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_16a1bpp_mask@48, 64, betausm_._YUV_blit_16a1bpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_16a4bpp@40, 65, betausm_._YUV_blit_16a4bpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_16a4bpp_mask@48, 66, betausm_._YUV_blit_16a4bpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_16bpp@40, 67, betausm_._YUV_blit_16bpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_16bpp_mask@48, 68, betausm_._YUV_blit_16bpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_24bpp@40, 69, betausm_._YUV_blit_24bpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_24bpp_mask@48, 70, betausm_._YUV_blit_24bpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_24rbpp@40, 71, betausm_._YUV_blit_24rbpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_24rbpp_mask@48, 72, betausm_._YUV_blit_24rbpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32abpp@40, 73, betausm_._YUV_blit_32abpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32abpp_mask@48, 74, betausm_._YUV_blit_32abpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32bpp@40, 75, betausm_._YUV_blit_32bpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32bpp_mask@48, 76, betausm_._YUV_blit_32bpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32rabpp@40, 77, betausm_._YUV_blit_32rabpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32rabpp_mask@48, 78, betausm_._YUV_blit_32rabpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32rbpp@40, 79, betausm_._YUV_blit_32rbpp@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_32rbpp_mask@48, 80, betausm_._YUV_blit_32rbpp_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_UYVY@40, 81, betausm_._YUV_blit_UYVY@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_UYVY_mask@48, 82, betausm_._YUV_blit_UYVY_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_YUY2@40, 83, betausm_._YUV_blit_YUY2@40)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_YUY2_mask@48, 84, betausm_._YUV_blit_YUY2_mask@48)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_blit_YV12@44, 85, betausm_._YUV_blit_YV12@44)
FORWARDED_EXPORT_WITH_ORDINAL(_YUV_init@4, 86, betausm_._YUV_init@4)
