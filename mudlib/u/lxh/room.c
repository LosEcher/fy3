
#include <ansi.h>
inherit ROOM;

int fix_cmd(object me, string arg);
void create ()
{
      set ("short", HIC+BLINK+CLR"Ѱ������"NOR);
      set ("long", 
      
"\n"REV"***********************************************************\n"NOR""
"�갮���� ������ɫ ������Ե ����ǧ�� ���ڲ��� \n"
"                                               ---���Ͼ����\n"
"***********************************************************\n"
"ֻ���ڷ��ϳɴ���  ��Ψ��֮��  ��Ψ��֮��\n"
"                                               --- άĦ�����ʼ�Ʒ\n"
"***********************************************************\n"
"���޳���,�������,��춳���,�Ծ�����,������ͷ\n"
"                                               --- ���Ͼ�\n"
"***********************************************************\n"
"��Ǭ��н  ������  δ������  �Խ�����\n"
"                                               --- ��ׯ�Ͼ���\n"
"***********************************************************\n\n"NOR""

);

  set("exits", ([ /* sizeof() == 4 */
/*  
      "fy"  :           __DIR__"fy", 
      "xyj" :   	__DIR__"xyj",
      "xkx ": 		__DIR__"xkx",
      "west": 		__DIR__"combatd",
*/      
]));
  set("objects", ([ /* sizeof() == 2 */
]));
//  set("no_fight", 1);
//  set("no_magic", 1);
  set("resource", ([ /* sizeof() == 1 */
  "water" : 1,
]));
  set("valid_startroom", 1);
  setup();
//  call_other("/obj/board/nancheng_b", "???");
}

void init()
{
	add_action("fix_cmd","fix");
}

int fix_cmd(object me, string arg)
{
	me=this_player();
	
        if (me->query("id")=="swordman") {
                          me->set("env/msg_min",HIY"���һ������һ����⣬$N����һ����ɨ������бб�ķ��˹�����\nֻ������ѽ��һ���ҽУ�$N����ɨ��ˤ������.\n"NOR);  
		        me->set("env/msg_mout",HIW"$Nһ��������ԣ�����ææ������ɨ������ˡ�������\n"NOR);
		        me->set("env/msg_clone",HIM"$N���ĵĴӻ���������һ�����������Сħ�������л�����,\nȻ����ջ���һ����Ȧ��ֻ��"NOR"$n"HIM"�ӹ�Ȧ�����������!"NOR);
		        write("ok!\n");
		        return 1;
		        }
}
