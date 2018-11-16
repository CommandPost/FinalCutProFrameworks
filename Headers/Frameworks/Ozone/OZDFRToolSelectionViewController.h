//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

