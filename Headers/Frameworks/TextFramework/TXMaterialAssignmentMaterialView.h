//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class TXMaterialAssignmentController;

@interface TXMaterialAssignmentMaterialView : NSView
{
    unsigned int _facetAssignment;
    TXMaterialAssignmentController *_materialAssignmentController;
}

+ (id)selectedOutlineColor;
+ (id)selectedColor;
+ (id)defaultOutlineColor;
+ (id)defaultColor;
@property(nonatomic) unsigned int facetAssignment; // @synthesize facetAssignment=_facetAssignment;
@property(nonatomic) TXMaterialAssignmentController *materialAssignmentController; // @synthesize materialAssignmentController=_materialAssignmentController;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;

@end

