// Room: /u/swordman/yangzhou/nandaj1.c

inherit ROOM;

void create ()
{
  set ("short", "�ϴ��");
  set ("long", @LONG
�ϴ�����ǳ���ķ����ضΣ�һ�����ϣ�һ�ɵƺ���̣���Ϊ���֡�
Ц�������������������������һƬ��������Ķ��䣬�㲻����Գ����
����ʹ�ͣ������һ����������һ�����ֵĹ㳡��������һ�ҵ��̣�ǽ
��д��һ�����ġ������֣���ϸ������������ѹ�͵��ּۻ��۵������
��������һƬ�����������š�һ��һʮ������Ǯ����ԭ�����Ƿ�Բǧ��
֮������һ�Ҷĳ��� 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/nanhai.c" : 1,
]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"dangpu",
  "west" : __DIR__"duchang.c",
  "north" : __DIR__"guangchang",
  "south" : __DIR__"nandaj2",
]));
  set("outdoors", "/u/swordman");
  set("light_up", 1);

  setup();
}
