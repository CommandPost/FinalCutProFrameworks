//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProChannel/CHChannelBase.h>

@interface CHChannelFolder : CHChannelBase
{
}

+ (unsigned int)_defaultChannelFlags;
+ (struct OZChannelBase *)_newOZChannelWithName:(id)arg1 channelID:(unsigned int)arg2 flags:(unsigned int)arg3;
+ (BOOL)_isOZChannelClassOK:(struct OZChannelBase *)arg1;
- (BOOL)hasTimeVaryingDescendant;
- (BOOL)hasDescendantWithFadeHandle;
- (BOOL)hasModifiedDescendant;
- (id)descendantAtPath:(id)arg1;
- (id)pathToDescendant:(id)arg1;
- (BOOL)hasDescendant:(id)arg1;
- (BOOL)configureDescendantsWithChannelState:(id)arg1;
- (id)channelStateForDescendants:(BOOL)arg1;
- (void)removeAllChildren;
- (void)removeChild:(id)arg1;
- (BOOL)_shouldDeleteDescendantsOnRemoval;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (unsigned int)_newChannelIdForChild;
- (void)iterateDescendantsWithOptions:(unsigned int)arg1 usingSelector:(SEL)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (void)iterateDescendantsWithOptions:(unsigned int)arg1 usingFunction:(CDUnknownFunctionPointerType)arg2 contextInfo:(void *)arg3;
- (void)iterateDescendantsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)childWithChannelID:(unsigned int)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned int)numberOfChildren;
- (id)children;
- (void)setFolderFlags:(unsigned int)arg1;
- (unsigned int)folderFlags;
- (void)resetFolderFlag:(unsigned int)arg1;
- (void)setFolderFlag:(unsigned int)arg1;
- (BOOL)testFolderFlag:(unsigned int)arg1;
- (struct OZChannelFolder *)ozChannel;
- (id)debugDescription;
- (id)debugDescrptionWithIndentLevel:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)addNewChannelWithXMLTypeInfo:(id)arg1;

@end

