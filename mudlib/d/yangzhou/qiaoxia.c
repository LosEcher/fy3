// Room: /u/swordman/yangzhou/qiaoxia
inherit ROOM;

void create ()
{
  set ("short", "����ͷ");
  set ("long", @LONG
�������˺��ϵ�һ��æµ��С����ͷ�������������ۣ��������Ļʵ�
�������ݣ����ǳ˴��ڼ��ڴˣ���ͷ�ߵ�ʯ����ע������ͷ��������Ѳ�
�ɿ��������öബֻ��ͣ���ڴˣ������ݳǵ���Ҫ����ڰ��� 
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/chuanlaoda" : 1,
  __DIR__"npc/chuanjia" : 1,
]));
  set("outdoors", "/u/swordman");
  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"qiao",
]));

  setup();
}
