//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class FFCPSView, NSArray;

__attribute__((visibility("hidden")))
@interface FFCPSViewController : NSViewController
{
    BOOL _notificationsInstalled;
    int _cPSType;
    NSArray *_dataItemList;
    FFCPSView *_controlStripView;
    double _controlViewHeight;
}

@property(nonatomic) double controlViewHeight; // @synthesize controlViewHeight=_controlViewHeight;
@property(retain, nonatomic) FFCPSView *controlStripView; // @synthesize controlStripView=_controlStripView;
@property(retain, nonatomic) NSArray *dataItemList; // @synthesize dataItemList=_dataItemList;
@property(nonatomic) int cPSType; // @synthesize cPSType=_cPSType;
@property(nonatomic) BOOL notificationsInstalled; // @synthesize notificationsInstalled=_notificationsInstalled;
- (id)scaleImageProportionally:(id)arg1 toSize:(struct CGSize)arg2;
- (id)sequenceTrailerOrThemeName:(id)arg1;
- (BOOL)sequenceIsTrailer:(id)arg1;
- (void)syncToDataItemList;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (void)_teardownNotifications;
- (void)_setupNotifications;
- (void)viewControllerDidChangeContent;
- (void)viewControllerWillChangeContent;
- (void)viewControllerDidUnhide;
- (void)viewControllerWillUnhide;
- (void)viewControllerDidHide;
- (void)viewControllerWillHide;
- (void)containingModuleWillHide;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

