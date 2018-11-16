//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FFJSONArchiver : NSObject
{
    NSMutableArray *_dictionaryStack;
    id _rootObject;
}

+ (id)JSONDataWithRootObject:(id)arg1 error:(id *)arg2;
@property(retain) id rootObject; // @synthesize rootObject=_rootObject;
- (id)JSONDataWithError:(id *)arg1;
- (void)encodeCMTime:(CDStruct_1b6d18a9)arg1 forKey:(id)arg2;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeLongLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)_encodedRepresentationForObject:(id)arg1;
- (id)_popDictionary;
- (id)_topDictionary;
- (void)_pushDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end
