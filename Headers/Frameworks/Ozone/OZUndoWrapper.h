//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OZUndoWrapper : NSObject
{
    struct OZUndoAction *_action;
    NSString *_description;
}

- (void)setDescription:(id)arg1;
- (id)getDescription;
- (void)setUndoAction:(struct OZUndoAction *)arg1;
- (struct OZUndoAction *)getAction;
- (void)dealloc;
- (id)init;

@end

