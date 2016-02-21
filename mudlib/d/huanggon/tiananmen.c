// Room: /d/huanggon/tiananmen.c

inherit ROOM;

void create()
{
	set("short", "�찲��");
	set("long", @LONG
�찲���ǻʳǵ�����,�߸ߵĳ�¥�����������,ÿ����,����گ
�����'��ͤ'��,̧���˵�,���񲿹�Ա�ڳ�¥�ϴ�������������Ϣ,
�찲�ű���������,�ϱ���Ƭ�㳡.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/duolong.c" : 1,
  __DIR__"npc/huanggonshiwei.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wumen",
  "south" : __DIR__"guangchang",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object ob,string dir)
{
  if (ob->query("gender")!="����"&&!ob->query_temp("huanggon/enter")) {
if (dir=="north"&&ob->query("xxy/lvl")<4)  {
   if (present("shi wei",this_object())) {
     message_vision("�ʹ�������ס$N:��,���ô��ʹ�ô?\n",ob);
     return notify_fail("");
   }
   if (present("duo long",this_object())) {
     message_vision("��¡��ס$N:�ʹ�Ҳ�������Խ���ô?\n",ob);
     return notify_fail("");
   }
  }
 }
return ::valid_leave(ob,dir);
}  	
