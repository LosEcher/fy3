// Room: /u/xxy/room/shuzhuang
inherit ROOM;

void create()
{
  set ("short", "��ױ����");
  set ("long", @LONG
�ڼ���ž����,��һ������,�����з��;�ʯ,Զ�ۺ���һ̨,��
������,�����µ����䴦����.��˵�����ʵ�֮ĸ��ɽ����,���𶥼���
����������ױ���,�Ա������֮��.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"xixiang",
  "westup" : __DIR__"jushich",
]));
set("outdoors","/d/emei");
  setup();
  replace_program(ROOM);

}
