// Room: /d/huanggon/shenwumen.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���������Ͻ��ǵı���,���˴��ž��Ǿ�ɽ.�����Ÿߴ���׳,����
�𶤵������Ų���,��֮�Ͼ��ǳ�¥,����һ������,д������������,
�ϱ����հ���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/huanggonshiwei.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"qingandian",
  "north" : __DIR__"guangchang1",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object ob,string dir)
{
   if (!ob->query_temp("huanggon/enter")&&dir=="south") {
 if (ob->query("gender")!="����"&&present("shi wei",this_object())) 
{   if (ob->query("xxy/lvl")<4)
   return notify_fail("�ʹ�������ס����:�ʹ�Ҳ�����ɽ���!\n");
}
   }
 return ::valid_leave(ob,dir);
 }
   		
