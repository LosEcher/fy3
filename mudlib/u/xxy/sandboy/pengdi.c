// Room: /d/sandboy/pengdi 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "���");
  set ("long", @LONG
����ɽ���������̲������е���һ�����֮��.��Ƭ��أ�
�����а�Ķ��С������ɽ�廷������Ⱥɽ����У��Գ�һƬ��ɫ�� 
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"shandao8",
]));
  set("outdoors", "/d/sandboy");
  setup();
}
void init()
{
    add_action("do_in","yaoqing");
}
int do_in()
{
    command("yaoqing xxy");
    return 1;
}