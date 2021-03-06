//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKButton.h>

@class TXMaterialAssignmentController;

@interface TXButton : LKButton
{
    long long _trackingTag;
    BOOL _hovering;
    unsigned int _facetAssignment;
    TXMaterialAssignmentController *_materialAssignmentController;
}

@property(nonatomic) unsigned int facetAssignment; // @synthesize facetAssignment=_facetAssignment;
@property(nonatomic) TXMaterialAssignmentController *materialAssignmentController; // @synthesize materialAssignmentController=_materialAssignmentController;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)dealloc;
- (void)txButtonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

