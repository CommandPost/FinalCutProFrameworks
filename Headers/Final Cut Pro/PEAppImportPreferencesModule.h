//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProPreferencesModule.h"

@class LKButton;

@interface PEAppImportPreferencesModule : NSProPreferencesModule
{
    LKButton *_copyFilesCheckBox;
    LKButton *_addFolderKeywordsCheckBox;
    LKButton *_optimizeMediaCheckBox;
    LKButton *_createProxyMediaCheckBox;
    LKButton *_autoColorBalance;
    LKButton *_autoStabilization;
    LKButton *_autoFaceDetection;
    LKButton *_findPeopleConsolidateResults;
    LKButton *_createSmartCollectionsCheckBox;
    LKButton *_autoEmptyTracksDetection;
    LKButton *_autoRelatedTracksDetection;
    LKButton *_autoCleanupAudio;
}

- (void)awakeFromNib;
- (void)dealloc;
- (id)titleForIdentifier:(id)arg1;
- (BOOL)findPeopleEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

