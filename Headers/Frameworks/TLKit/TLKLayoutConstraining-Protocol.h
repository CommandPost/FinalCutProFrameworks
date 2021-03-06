//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TLKit/NSObject-Protocol.h>

@class NSSet, TLKLayoutConstraint, TLKLayoutContext;
@protocol NSFastEnumeration, TLKLayoutConstraining;

@protocol TLKLayoutConstraining <NSObject>
@property(copy, nonatomic) NSSet *layoutConstraintObservers;
@property(copy, nonatomic) NSSet *layoutConstraints;
- (struct CGRect)layoutFrameForLayoutContext:(TLKLayoutContext *)arg1;
- (void)removeObserver:(id <TLKLayoutConstraining>)arg1 forLayoutConstraint:(TLKLayoutConstraint *)arg2;
- (void)addObserver:(id <TLKLayoutConstraining>)arg1 forLayoutConstraint:(TLKLayoutConstraint *)arg2;
- (void)removeLayoutConstraints:(id <NSFastEnumeration>)arg1;
- (void)removeLayoutConstraint:(TLKLayoutConstraint *)arg1;
- (void)addLayoutConstraints:(id <NSFastEnumeration>)arg1;
- (void)addLayoutConstraint:(TLKLayoutConstraint *)arg1;
@end

