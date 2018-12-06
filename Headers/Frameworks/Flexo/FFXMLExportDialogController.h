//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSString;

@interface FFXMLExportDialogController : NSViewController
{
    NSString *mFormat;
    int mPrimaryVersion;
    int mSecondaryVersion;
    BOOL mExportingProject;
    BOOL mExportMedia;
    BOOL mRelativePaths;
    id mPanel;
    id mSourceProjectLine;
    id mSourceProjectIconView;
    id mFormatString;
    id mExportMediaButton;
    id mRelativePathsButton;
}

- (void)setupFormatVersions:(id)arg1;
- (void)resetDefaults:(BOOL)arg1;
- (id)initWithSavePanel:(id)arg1 rootObject:(id)arg2 curXMLVers:(id)arg3;
- (void)export:(id)arg1;
- (void)setExportMediaFiles:(id)arg1;
- (void)setExportFormatVersion:(id)arg1;
- (void)setUseRelativePaths:(id)arg1;
- (id)optionsDict;

@end

