//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerHostView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface FFOrganizerImportDropResponderLayerHostView : FFResponderLayerHostView
{
    id <FFOrganizerImportDropController> _importDropController;
    CALayer *_feedbackLayer;
}

@property(retain, nonatomic) CALayer *feedbackLayer; // @synthesize feedbackLayer=_feedbackLayer;
@property(nonatomic) id <FFOrganizerImportDropController> importDropController; // @synthesize importDropController=_importDropController;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_registerForDraggedTypes;
- (void)dealloc;

@end

