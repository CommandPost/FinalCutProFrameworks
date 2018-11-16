//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFDataListModeViewController.h>

@class FFAnchoredTimelineModule, FFDataListLanesDataSource, FFDataListLanesOutlineViewController, FFProStoryTimelinePresentation, LKPaneCapView, LKSegmentedControl, NSView;

__attribute__((visibility("hidden")))
@interface FFDataListLanesViewController : FFDataListModeViewController
{
    BOOL _observingTimelineModule;
    BOOL _observingStoryPresentation;
    BOOL _pause;
    FFDataListLanesOutlineViewController *_timelineIndexLanesViewController;
    LKSegmentedControl *_editRolesSegmentedControl;
    LKSegmentedControl *_organizedModeControl;
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
@property(nonatomic) LKSegmentedControl *organizedModeControl; // @synthesize organizedModeControl=_organizedModeControl;
@property(nonatomic) LKSegmentedControl *editRolesSegmentedControl; // @synthesize editRolesSegmentedControl=_editRolesSegmentedControl;
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
