// Room: /d/hangzhou/npc/dalu4 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "��·");
  set ("long", @LONG
һ�������Ĵ��,�����������ﲻ��,����һ·�ķ糾,�Ӵ���,
�и���·��,���򱱾����㵴ɽ��,�����������Ǻ���.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/suzhou/dadao3",
  "east" : __DIR__"dalu3",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "e" : "",
]));
  set("outdoors", "/d/hangzhou");
  setup();
}
