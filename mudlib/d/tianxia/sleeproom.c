// Room: /d/tianxia/sleeproom
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
���ų�����ʯ�ռ���˷����о��󲿷ֵĿռ䣬���Ϻ�������Щ��
�����Ҳû����������һ������ĳ�ζ������һ��С������һС
���������������Ψһ�Ĺ�Դ��
LONG);

  set("sleep_room", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"1guan8",
]));

  setup();
}
