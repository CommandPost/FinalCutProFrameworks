//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZDFRAbstractBaseViewController.h>

@class NSArray, NSScrollView, NSSegmentedControl;

@interface OZDFRToolSelectionViewController : OZDFRAbstractBaseViewController
{
    NSScrollView *_scrollView;
    NSSegmentedControl *_segmentedControl;
    NSArray *_validIdentifierModelsForCurrentDocumentState;
}

@property(retain, nonatomic) NSArray *validIdentifierModelsForCurrentDocumentState; // @synthesize validIdentifierModelsForCurrentDocumentState=_validIdentifierModelsForCurrentDocumentState;
@property(nonatomic) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)onSegmentChanged:(id)arg1;
- (void)scroll:(id)arg1 toXPosition:(double)arg2 duration:(double)arg3;
- (void)scrollSelectedSegmentToVisibleAnimated:(BOOL)arg1;
- (void)updateToCurrentDocumentState;
- (void)updateWithNotificationFlags:(unsigned int)arg1;
- (void)viewWillAppear;
- (void)dealloc;

@end

