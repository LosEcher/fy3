// Room: /d/huanggon/kangwangfu.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
����������������,���ƴ��յĵ��������ñ����,�������˰���
�ļ�ѹ,�ڳ��кܲ�����,����������һ��֮��,��������ø����û�,����
Щ����.�����Ҷ��ڽ��ű���ɢ�Ŀ���.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jiading.c" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tingyuan",
  "south" : __DIR__"wchangan",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");

	setup();
}
int valid_leave(object ob,string dir)
{
  if (ob->query_skill("literate",1)<60&&ob->query("combat_exp")<200000) {
  if (present("jia ding",this_object())&&dir=="north") 
    return notify_fail("�����Ҷ������:������������,�������үô.\n");
   }
 return ::valid_leave(ob,dir);
 }