//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OZObjCDocument;

@interface OZASMasterAudioTrack : NSObject
{
    double pan;
    double level;
    id container;
    OZObjCDocument *_document;
    unsigned int _myID;
}

- (id)init;
- (void)setPan:(double)arg1;
- (double)getPan;
- (void)setLevel:(double)arg1;
- (double)getLevel;
- (void)setDocument:(id)arg1;
- (id)getDocument;
- (void)setMyID:(unsigned int)arg1;
- (unsigned int)getMyID;
- (void)setContainer:(id)arg1;
- (id)getContainer;
- (id)objectSpecifier;

@end

