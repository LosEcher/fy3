inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("������", ({ "qin xinlan", "qin" }) );
        set("title", HIR"������������"HIY"����"NOR);
        set("gender", "Ů��");
        set("class", "swordsman");
        set("age", 22);
        set("long", "�������������ķ��ˣ�������֬��ò�������ɣ�ȫ��ɢ��������
Ů�ӵ��������뵱��������Ϊ�����ߵ���Ȣ�����ź�Ҳ��������
�ƴӡ���Ҳ�����������ˣ��ԴӼ޸���������Ͳ����ʽ������Ƿ�
ר����һ���÷����ˡ�\n");
        set("attitude", "peaceful");
        set("str", 26);
set("per", 40);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 5000);
        set("max_force", 5000);
        set("force_factor", 30);
        set("max_kee",3000);
        set("max_gin",1200);
        set("combat_exp", 3000000);
        set("shen_type", -1);
        set_skill("unarmed", 220);
        set_skill("songyang-zhang",220);
        set_skill("sword", 220);
        set_skill("force", 220);
        set_skill("hanbing-zhenqi",220);
        set_skill("parry", 220);
        set_skill("dodge", 220);
        set_skill("songshan-jianfa", 220);
        set_skill("fuguanglueying", 220);
            set_skill("poyun-zhang", 220);

        map_skill("sword", "songshan-jianfa");
        map_skill("parry", "songshan-jianfa");
        map_skill("dodge", "fuguanglueying");
        map_skill("force","hanbing-zhenqi");
        map_skill("unarmed","poyun-zhang");

        create_family("��ɽ��", 13, "���ŷ���");
        setup();

carry_object("/u/yuki/songshan/npc/obj/shoes")->wear();
carry_object("/obj/weapon/sword")->wield();
carry_object("/u/yuki/songshan/npc/obj/pao")->wear();
}

void init()
{
        object ob;

        ::init();

        if( interactive(ob=this_player()) && !is_fighting())
        {
                remove_call_out("greeting");
                call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
        string family;

        family=(string)ob->query("family/family_name");
        if(family=="��ɽ��")
        command("say "+ob->query("name")+"����Ҫ�ú�����������Ҫ��������������Ϊ��");
        else    {
         command("say �ߣ���ɽ�����������Ҵ���");
        kill_ob(ob);
        ob->fight_ob(this_object());
        }
}

void attempt_apprentice(object ob)
{
        string fam;

        fam=(string)ob->query("family/family_name");
        if(! fam || fam!="��ɽ��")
        command("say �ߣ������ɲ������������ɵĵ��ӡ�");
        else if((int)ob->query("mingwang")>10000)
        command("say Ҫ���ҵĵ��ӱ����ǽ������ϵ���ʿ��"+
        RANK_D->query_respect(ob)+"�����Ĳ�������");
        else if((int)ob->query_skill("hanbing-zhenqi",1)<100)
        command("say ���ź����������ķ���"+RANK_D->query_respect(ob)
        +"��Ҫ�໨Щ���򰡡�");
        else    {
        command("say �Ǻǣ���Ȼ����˳��ģ��Ǳ�����������ɡ�");
       command("recruit " + ob->query("id") );
       ob->set("class","swordsman");
        }
}

