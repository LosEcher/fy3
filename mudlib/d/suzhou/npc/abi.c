// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("阿碧",({"a bi","bi","a"}));
	set("gender","女性");
	set("age",16);
	set("str",50);
	set("cor", 30);
	set("mingwang",1);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("per",30);
	set("long",
	"慕容复的小丫环。满脸都是温柔，满身尽是秀气。\n"
	);
	set("no_get",1);
	set("combat_exp",25000);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damage",20);
	set_skill("unarmed",70);
	set_skill("dodge",70);
	set("attitude","friendly");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"阿碧皱眉道：我有什么地方得罪了你？还请明言。\n",
	"阿碧怒道：慕容家的丫环不是好惹的！\n",
	}) );
	set("inquiry", ([
	"慕容复":"介未真正弗巧哉！慕容公子刚刚前日出仔门。\n"
		+"          早来得三日末，介就碰着公子哉。\n",
	"燕子坞" : "这里去燕子坞琴韵小筑，都是水路。\n"
		+"          倘若要去，介末请上船(boat)，我划船相送，好伐。\n",
		"参合庄":"参合庄的名字，外边人勿会晓得，你从啥地方听来？\n\n",
	]) );
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	::init();
	add_action("do_boat","boat");
}
int do_boat()
{
	object me;
	me=this_player();
      if( living(this_player()) ==0 ) return 0;
	message_vision(CYN"$N轻轻跃上小舟。那小舟只略沉少许。\n"
		+"阿碧对着$N说道：“坐稳啦。”\n"
		+"言罢，木桨一扳，小舟便向西滑去。\n"NOR,me);
	me->move("/d/suzhou/qinyun/taihu1.c");
	destruct(this_object());
	return 1;
}
