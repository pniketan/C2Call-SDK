//
//  SCMyBroadcastsController.h
//  C2CallPhone
//
//  Created by Michael Knecht on 21/05/16.
//
//

#import <SocialCommunication/SocialCommunication.h>

@class SCBroadcast;

@interface SCMyBroadcastCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *broadcastImage;
@property (weak, nonatomic) IBOutlet UILabel *broadcastName;
@property (weak, nonatomic) IBOutlet UILabel *broadcastDetail;
@property (nonatomic, strong) NSString *broadcastid;

@property (nonatomic, strong) SCBroadcast *broadcast;

@end

@interface SCMyBroadcastsController : SCDataTableViewController

@end