#ifndef __CUSTOMSONGWIDGET_H__
#define __CUSTOMSONGWIDGET_H__

#include <gd.h>

namespace gd {
    class FLAlertLayer;
    class FLAlertLayerProtocol;
    class SongInfoObject;

    class CustomSongWidget : public cocos2d::CCNode, MusicDownloadDelegate, FLAlertLayerProtocol {
    public:
        SongInfoObject* m_songInfo;

        void updateSongObject(SongInfoObject* song) {
            reinterpret_cast<void(__thiscall*)(CustomSongWidget*, SongInfoObject*)>(base + 0x69280)(this, song);
        }

        virtual void FLAlert_Clicked(FLAlertLayer*, bool);
        // too lazy to type out all of them
        virtual void loadSongInfoFinished(SongInfoObject*);
    };
}

#endif

