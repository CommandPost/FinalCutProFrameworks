//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TLKPartPath : NSObject
{
    NSArray *_partArray;
}

+ (id)partPathWithParts:(id)arg1;
- (id)description;
- (id)path;
- (id)partWithIdentifier:(id)arg1;
- (id)lastPart;
- (id)firstPart;
- (id)allParts;
- (void)dealloc;
- (id)initWithParts:(id)arg1;

@end

