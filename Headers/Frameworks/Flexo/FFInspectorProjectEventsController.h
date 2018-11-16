//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFAsset, FFInspectorProjectEventsView, NSButton, NSMutableSet, NSScrollView, NSSet, NSString, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface FFInspectorProjectEventsController : NSObject
{
    NSButton *_reprioritiseEventsButton;
    NSButton *_cancelButton;
    NSWindow *_reprioritiseSheet;
    FFInspectorProjectEventsView *_eventsView;
    NSMutableSet *_viewControllers;
    BOOL _prioritise;
    id _inspectorModule;
    NSTextField *_title;
    NSTextField *_subTitle;
    NSScrollView *_scrollView;
    NSWindow *_sheet;
    NSSet *_clipRefs;
    FFAsset *_asset;
    BOOL _modifiedLocations;
    NSString *_titleText;
    NSString *_subTitleText;
}

- (id)init;
- (void)dealloc;
- (void)_addEventToList:(id)arg1 inProject:(id)arg2 withRefs:(id)arg3;
- (void)startSheetInWindow:(id)arg1 forEvents:(id)arg2 andRefs:(id)arg3 inProject:(id)arg4;
- (void)reprioritiseSheetCancelled:(id)arg1;
- (void)reprioritiseSheetDidClose:(id)arg1;
- (void)didEndPrioritiseSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property(retain, nonatomic) FFAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSWindow *sheet; // @synthesize sheet=_sheet;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTextField *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSTextField *title; // @synthesize title=_title;
@property(nonatomic) id inspectorModule; // @synthesize inspectorModule=_inspectorModule;
@property(retain, nonatomic) FFInspectorProjectEventsView *eventsView; // @synthesize eventsView=_eventsView;
@property(retain, nonatomic) NSButton *reprioritiseEventsButton; // @synthesize reprioritiseEventsButton=_reprioritiseEventsButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSWindow *reprioritiseSheet; // @synthesize reprioritiseSheet=_reprioritiseSheet;

@end
