// Room: /city2/zhengmen.c

#include <room.h>

inherit ROOM;

string look_gaoshi();

void create()
{
	set("short", "�Ͻ���");
	set("long", @LONG
����ǻʹ����š�Ρ����ΰ�ĳ�ǽ�ϣ�'�Ͻ���'��������ʮ�����ۣ�
���ƻԻ͡�һ����ɫ�Ĺ�ǽ�ѹ�����ָ�����,�������־��ڹ�ǰ����,��
���������.
LONG );
	set("item_desc", ([
		"north" :"���־��ȵ�:��ü���۵ĸ�ʲô,�������߿�.\n", 
	]));
	set("exits", ([
		"south" : __DIR__"bridge",
		"north" : "/d/huanggon/qihedian",
	]));
        set("objects", ([
__DIR__"npc/yulinjun": 2,
__DIR__"npc/duolong":1,
        ]));
	set("outdoors", "city2");
	setup();
}

int valid_leave(object me, string dir)
{
 object ob;
  if (dir=="north")  {
  	if (!me->query_temp("huanggon/enter")||me->query("gender")!="����")  {
  if (ob=present("guard",this_object())) {
 message_vision("$N��ס$n:��,���ô��ʹ�?\n",ob,me);
 return notify_fail("");
        }
  if (ob=present("duolong",this_object())) {
 message_vision("$N��ס$n:�ʹ��������ܽ���.\n",ob,me);
 return notify_fail("");
         }
    }
 }
return ::valid_leave(me,dir);
}	