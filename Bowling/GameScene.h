//
//  GameScene.h
//  Bowling
//

//  Copyright (c) 2015 Larry Feldman. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GameScene : SKScene<SKPhysicsContactDelegate>

@property (strong, nonatomic) NSTimer *blockTimer;

@end
