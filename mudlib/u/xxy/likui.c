// music   yangzhou's ����

inherit NPC;

void create()
{
	set_name("����", ({ "likui", "li", "li kui" }) );
	set("gender", "����" );
	set("age", 40);
        set("title","�ĳ�����");
	set("long",
		"���ӵ�����һ�ۣ���Ц��һ����\n");
	set("mingwang", -1);
	set("combat_exp", 80000);
        set("int", 31);
        set_skill("unarmed",100);
        set_skill("dodge",40);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}
void init()
{
add_action("do_ddd","ddd");
add_action("do_eee","eee");
}
string do_ddd()
{
string str;
int i;
str = ""; /* �ڴ�, str ���ִ�����ֵ��ʼ�� */
for(i=0; i<6; i++) {
switch(random(3)+1) {
case 1: str += "bing"; break;
case 2: str += "borg"; break;
case 3: str += "foo"; break;
}
if(i==5) str += ".\n";
else str += " ";
}
write(capitalize(str));
}

void do_eee()
{
string str;
int ver;
str=query("id");
ver=id(str);
write(ver);
}
