//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFDataListModeViewController.h>

@class FFAnchoredTimelineModule, FFDataListLanesDataSource, FFDataListLanesOutlineViewController, FFProStoryTimelinePresentation, LKButton, LKPaneCapView, NSView;

__attribute__((visibility("hidden")))
@interface FFDataListLanesViewController : FFDataListModeViewController
{
    BOOL _observingTimelineModule;
    FFProStoryTimelinePresentation *_observedStoryPresentation;
    BOOL _pause;
    FFDataListLanesOutlineViewController *_timelineIndexLanesViewController;
    LKButton *_editRolesButton;
    LKButton *_organizedModeButton;
    LKPaneCapView *_buttonTray;
    NSView *_containerView;
    FFAnchoredTimelineModule *_timelineModule;
    FFProStoryTimelinePresentation *_storyTimelinePresentation;
    FFDataListLanesDataSource *_timelineIndexDataSource;
}

@property(retain, nonatomic) FFDataListLanesDataSource *timelineIndexDataSource; // @synthesize timelineIndexDataSource=_timelineIndexDataSource;
@property(nonatomic) BOOL pause; // @synthesize pause=_pause;
@property(retain, nonatomic) FFProStoryTimelinePresentation *storyTimelinePresentation; // @synthesize storyTimelinePresentation=_storyTimelinePresentation;
@property(retain, nonatomic) FFAnchoredTimelineModule *timelineModule; // @synthesize timelineModule=_timelineModule;
@property(nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) LKPaneCapView *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(nonatomic) LKButton *organizedModeButton; // @synthesize organizedModeButton=_organizedModeButton;
@property(nonatomic) LKButton *editRolesButton; // @synthesize editRolesButton=_editRolesButton;
@property(retain, nonatomic) FFDataListLanesOutlineViewController *timelineIndexLanesViewController; // @synthesize timelineIndexLanesViewController=_timelineIndexLanesViewController;
- (void)_reloadStoryOutlets;
- (void)_storyPresentationChanged:(id)arg1;
- (void)_timelineModuleWillBeRemoved:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startObservingTimelineModule;
- (void)_stopObservingTimelineModule;
- (void)_startObservingStoryPresentation;
- (void)_stopObservingStoryPresentation;
- (id)dataListInfoStringForProposedString:(id)arg1;
- (BOOL)supportsSearch;
- (void)setDataListModule:(id)arg1;
- (void)performEditRoles:(id)arg1;
- (void)editRolesButtonClicked:(id)arg1;
- (void)allAudioLanesButtonClicked:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

