// Room: /d/huanggon/qianqingon.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "Ǭ�幬");
	set("long", @LONG
Ǭ�幬��ǰ��������,ǰ���ǻ����ճ���������֮��.��������֮��
�ǻ��ϵ���������,̨��֮��߽������ƴ�Ź���,���������������,
�����Ǿ�������,֮��������������Ҷ�.�����߸߹һư�(huang bang).
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"jiaotaidian",
  "west" : __DIR__"yangxindian",
  "south" : __DIR__"qianqinmen",
]));
set("no_clean_up", 1);
set("no_steal",1);
set("no_fight",1);
	set("objects", ([ /* sizeof() == 2 */
__DIR__"npc/zhishi.c" : 1,
  __DIR__"npc/kangxi.c" : 1,
]));
	setup();
}
void init()
{
   add_action("do_look","look");
  }
int do_look(string arg)
{
   mapping *quest,who;
   string name,id,str=YEL"�ư�\n"NOR;
   string *whtodo;
   int i;
   if (arg!="huang bang") return 0;
   quest=query("huangbang");
   if (!quest) {
   	write("�����ſհ׵Ľ�˿����ư�.\n");
   	return 1;
        }
   if (query("item_desc")) return 0;
   whtodo=query("what");
   for (i=0;i<9;i++)  {
   	who=quest[i];
   	name=i+1+".��"+who["name"];
   	id="("+who["id"]+")"+"ѯ��";
   	str+="        "+name+id+HIR+whtodo[i]+NOR+".\n";
   }
  set("item_desc",([
  "huang bang":str,]));
  write(str);
  return 1;
}
