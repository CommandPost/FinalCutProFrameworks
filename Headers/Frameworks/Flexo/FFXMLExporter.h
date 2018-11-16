//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSString, NSXMLDocument;

__attribute__((visibility("hidden")))
@interface FFXMLExporter : NSObject
{
    NSXMLDocument *_xmlDoc;
    NSMapTable *_resByModelID;
    NSMapTable *_resByLocalID;
    BOOL _inEvent;
    NSString **_alternateRoleLabels;
}

- (id)registerResource:(id)arg1 name:(id)arg2 modelID:(id)arg3;
- (id)registerProjectRef:(id)arg1;
- (id)registerEffect:(id)arg1;
- (id)registerTransition:(id)arg1;
- (id)registerAsset:(id)arg1;
- (id)registerVideoProps:(id)arg1 colorOverride:(int)arg2;
- (id)newSpineNode:(id)arg1;
- (id)newAuditionNode:(id)arg1;
- (id)newCompositeNode:(id)arg1 isSequence:(BOOL)arg2;
- (id)newClipNode:(id)arg1 media:(id)arg2 src:(id)arg3 kind:(id)arg4;
- (id)newAudioNode:(id)arg1 media:(id)arg2 src:(id)arg3;
- (id)newVideoNode:(id)arg1 media:(id)arg2 src:(id)arg3;
- (id)newTransitionNode:(id)arg1;
- (id)newTranslatedCompositeNode:(id)arg1;
- (id)newGeneratorNode:(id)arg1;
- (id)newGapNode:(id)arg1;
- (id)newTitleNode:(id)arg1;
- (void)addNotes:(id)arg1 element:(id)arg2;
- (void)addChannel:(id)arg1 name:(id)arg2 element:(id)arg3;
- (void)addFormat:(id)arg1 element:(id)arg2;
- (void)addIntrinsicChannels:(id)arg1 element:(id)arg2;
- (void)addMarkers:(id)arg1 element:(id)arg2;
- (void)addClip:(id)arg1 element:(id)arg2;
- (void)addObjects:(id)arg1 element:(id)arg2;
- (void)addRetimingInfo:(id)arg1 element:(id)arg2;
- (void)addEffects:(id)arg1 element:(id)arg2;
- (id)newSequenceProjectNode:(id)arg1;
- (id)newEventProjectNode:(id)arg1;
- (BOOL)writeDocument:(id)arg1 stream:(id)arg2 error:(id *)arg3;
- (id)init;
- (void)dealloc;

@end

