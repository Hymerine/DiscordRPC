#include "Discord.h"

void Discord::Initialize() {

	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("851879934641438730", &Handle, 1, NULL); //Paste your api key there
}

void Discord::Update() {
	//Copy your api pre-visualize
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.state = "DiscordRPC";
    discordPresence.details = "DiscordRPC";
    discordPresence.startTimestamp = 1507665886;
    //discordPresence.largeImageKey = "you're image name"; if you want to add some images
    discordPresence.largeImageText = "DiscordRPC";
  //  discordPresence.smallImageKey = "you're image name"; if you want to add some images
    discordPresence.smallImageText = "DiscordRPC";
    Discord_UpdatePresence(&discordPresence);

}